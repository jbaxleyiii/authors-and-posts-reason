open Data;

let typeDef = {|
  type Author {
    id: Int!
    firstName: String
    lastName: String
    posts: [Post] # the list of Posts by this author
  }
|};

type resolvers = {. "posts": Js.Array.t(post)};

let resolvers = {
  "posts": (author: Data.author) => Js.Array.filter((post) => post##authorId === author##id, posts)
};
