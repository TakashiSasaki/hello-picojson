test-dij: ./dij
	./dij <graph.json

test-readgraph: ./readgraph
	./readgraph < graph.json

test-main: ./main
	./main < hello.json

clean:
	rm -f main main.o readgraph readgraph.o



