# ofxChromaKey

![](sample_image.jpg)

A very simple chroma keying addon using GLSL. You can set two parameters.

- keyColor : set background (keying) color.
- threshold : set threshold of the range of key color.

# usage

```{c++}
ofxChromaKey chromaKey;

chromaKey.begin();
// draw something
chromaKey.end();
```
# License

The MIT License (MIT)
