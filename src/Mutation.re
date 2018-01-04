open Data;

let typeDef = {|
  type Mutation {
    upvotePost(postId: Int!): Post
  }
|};

type upvotePostArgument = {. "postId": int};

type root;

type resolvers = {. "upvotePost": (root, upvotePostArgument) => post};

exception MissingPost(string);

let resolvers: resolvers = {
  "upvotePost": (_, filter) =>
    switch (Js.Array.find((post) => post##id === filter##postId, posts)) {
    | None => raise(MissingPost("Couldn't find post with id " ++ string_of_int(filter##postId)))
    | Some(p) =>
      incr(p##votes);
      p
    }
};
