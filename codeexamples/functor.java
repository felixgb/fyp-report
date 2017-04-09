interface Functor<A> {
    Functor<B> map(Function<A, B> f);
}
