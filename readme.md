# ofxChromaKey

![](sample_image.jpg)

A very simple chroma keying addon using GLSL. You can set two parameters.

- keyColor : set background (keying) color.
- threshold : set threshold of the range of key color.

# usage

```{c++}
ofxChromaKey chromaKey;

chromaKey.keyColor = ofColor(0, 255, 0);
chromaKey.threshold = 0.8;

chromaKey.begin();
// draw something
chromaKey.end();
```
# License

The MIT License (MIT)
