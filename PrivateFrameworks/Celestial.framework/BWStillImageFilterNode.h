/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWStillImageFilterNode : BWNode <BWRendererResourceProvider> {
    BWColorLookupCache * _colorLookupCache;
    bool  _depthDataDeliveryEnabled;
    struct { 
        int width; 
        int height; 
    }  _depthDataMapDimensions;
    BWStillImageMetalBlurMapRenderer * _metalBlurMapRenderer;
    BWMetalColorCubeRenderer * _metalFilterRenderer;
    BWStillImageMetalSDOFRenderer * _metalSDOFRenderer;
    BWPixelBufferPool * _processingBufferPool;
    BWRenderList * _renderList;
    BWRenderListProcessor * _renderListProcessor;
    <BWRendererResourceProvider> * _rendererProvider;
    NSDictionary * _sensorIDDictionary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (int)_allocateOutputBufferPoolWithVideoFormat:(id)arg1;
- (id)_debugStringForBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_emitNodeErrorForErrorStatus:(int)arg1 numberOfNodeErrors:(int)arg2 requestedStillImageCaptureSettings:(id)arg3 resolvedStillImageCaptureSettings:(id)arg4;
- (id)_initWithResourceProvider:(id)arg1;
- (void)_prepareStillImageFilterRenderersForOriginalFilters:(id)arg1 processedFilters:(id)arg2;
- (void)dealloc;
- (bool)depthDataDeliveryEnabled;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (id)init;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (id)provideColorLookupCache;
- (id)provideCoreImageFilterRenderer;
- (id)provideMetalFilterRenderer;
- (id)provideStillImageMetalBlurMapRenderer;
- (id)provideStillImageMetalSDOFRenderer;
- (id)provideStreamingCVAFilterRenderer;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (id)sensorIDDictionary;
- (void)setDepthDataDeliveryEnabled:(bool)arg1;
- (void)setSensorIDDictionary:(id)arg1;

@end
