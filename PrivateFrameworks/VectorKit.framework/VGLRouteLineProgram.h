/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VGLRouteLineProgram : VGLFogProgram {
    struct _VGLColor { 
        float r; 
        float g; 
        float b; 
        float a; 
    struct _VGLColor { 
        float r; 
        float g; 
        float b; 
        float a; 
    struct _VGLColor { 
        float r; 
        float g; 
        float b; 
        float a; 
    int _alphaTextureSampler;
    float _halfWidth;
    } _primaryColor;
    float _routeTextureMappingScaler;
    float _splitLength;
    } _strokeColor;
    float _strokeWidthScale;
    float _textureCoordinateAdjustmentFactor;
    int _textureSampler;
    float _trafficTextureMappingCap;
    int _trafficTextureSampler;
    float _trafficWidthScaler;
    } _travelledColor;
    int _travelledTextureSampler;
    int _uAlphaTextureSampler;
    int _uHalfWidth;
    int _uPrimaryColor;
    int _uRouteTextureMappingScaler;
    int _uSplitLength;
    int _uStrokeColor;
    int _uStrokeWidthScale;
    int _uTextureCoordinateAdjustmentFactor;
    int _uTextureSampler;
    int _uTrafficTextureMappingCap;
    int _uTrafficTextureSampler;
    int _uTrafficWidthScaler;
    int _uTravelledColor;
    int _uTravelledTextureSampler;
}

@property int alphaTextureSampler;
@property float halfWidth;
@property struct _VGLColor { float x1; float x2; float x3; float x4; } primaryColor;
@property float routeTextureMappingScaler;
@property float splitLength;
@property struct _VGLColor { float x1; float x2; float x3; float x4; } strokeColor;
@property float strokeWidthScale;
@property float textureCoordinateAdjustmentFactor;
@property int textureSampler;
@property float trafficTextureMappingCap;
@property int trafficTextureSampler;
@property float trafficWidthScaler;
@property struct _VGLColor { float x1; float x2; float x3; float x4; } travelledColor;
@property int travelledTextureSampler;

+ (id)program;
+ (id)realisticProgram;

- (int)alphaTextureSampler;
- (float)halfWidth;
- (id)initWithStyle:(int)arg1;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })primaryColor;
- (float)routeTextureMappingScaler;
- (void)setAlphaTextureSampler:(int)arg1;
- (void)setHalfWidth:(float)arg1;
- (void)setPrimaryColor:(struct _VGLColor { float x1; float x2; float x3; float x4; })arg1;
- (void)setRouteTextureMappingScaler:(float)arg1;
- (void)setSplitLength:(float)arg1;
- (void)setStrokeColor:(struct _VGLColor { float x1; float x2; float x3; float x4; })arg1;
- (void)setStrokeWidthScale:(float)arg1;
- (void)setTextureCoordinateAdjustmentFactor:(float)arg1;
- (void)setTextureSampler:(int)arg1;
- (void)setTrafficTextureMappingCap:(float)arg1;
- (void)setTrafficTextureSampler:(int)arg1;
- (void)setTrafficWidthScaler:(float)arg1;
- (void)setTravelledColor:(struct _VGLColor { float x1; float x2; float x3; float x4; })arg1;
- (void)setTravelledTextureSampler:(int)arg1;
- (float)splitLength;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })strokeColor;
- (float)strokeWidthScale;
- (float)textureCoordinateAdjustmentFactor;
- (int)textureSampler;
- (float)trafficTextureMappingCap;
- (int)trafficTextureSampler;
- (float)trafficWidthScaler;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })travelledColor;
- (int)travelledTextureSampler;

@end
