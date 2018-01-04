let typeDefs = Query.typeDef ++ Mutation.typeDef ++ Author.typeDef ++ Posts.typeDef;

let resolvers = {
  "Query": Query.resolvers,
  "Mutation": Mutation.resolvers,
  "Author": Author.resolvers,
  "Post": Posts.resolvers
};

let schema = GraphQLTools.makeExecutableSchema({"typeDefs": typeDefs, "resolvers": resolvers});
