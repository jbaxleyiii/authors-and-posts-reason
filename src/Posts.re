open Data;

let typeDef = {|
  type Post {
    id: Int!
    title: String
    author: Author
    votes: Int
  }
|};

type resolvers = {. "author": post => Js.Nullable.t(author)};

let resolvers: resolvers = {
  "author": (post: Data.post) =>
    switch (Js.Array.find((author) => author##id === post##authorId, authors)) {
    | None => Js.Nullable.undefined
    | Some(p) => Js.Nullable.return(p)
    }
};
