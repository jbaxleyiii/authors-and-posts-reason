open Data;

let typeDef = {|
  type Query {
    posts: [Post]
    author(id: Int!): Author
  }
|};

type authorArgument = {. "id": int};

type root;

type resolvers = {
  .
  "posts": unit => Js.Array.t(post), "author": (root, authorArgument) => Js.Nullable.t(author)
};

let resolvers: resolvers = {
  "posts": () => posts,
  "author": (_, filter: authorArgument) =>
    switch (Js.Array.find((author) => author##id === filter##id, authors)) {
    | None => Js.Nullable.undefined
    | Some(a) => Js.Nullable.return(a)
    }
};
