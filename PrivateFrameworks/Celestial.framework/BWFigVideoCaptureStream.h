/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWFigVideoCaptureStream : NSObject {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _HDRStillCaptureReferenceFramePTS;
    long long  _activeFormatIndex;
    BWStillImageCaptureSettings * _activeResolvedStillImageCaptureSettings;
    bool  _activeStillImageCaptureIsMultiCameraCapture;
    int  _activeStillImageCaptureType;
    int  _activeStillImagePrimaryCaptureType;
    float  _aeMaxGain;
    NSDictionary * _attributes;
    int  _autoFocusPositionSensorMode;
    float  _baseZoomFactor;
    int  _bracketedCaptureSequenceNumberForOISLongExposure;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cameraAccessLock;
    bool  _clientProcessHasAccessToCamera;
    bool  _defersFaceDetectionStartup;
    <BWFigVideoCaptureStreamDelegate> * _delegate;
    int  _expectedImagesOrErrorsForCaptureStillImageNow;
    NSData * _extrinsicMatrix;
    NSDictionary * _faceDetectionConfiguration;
    struct OpaqueFigSimpleMutex { } * _faceDetectionConfigurationMutex;
    bool  _faceDetectionEnabled;
    bool  _faceDetectionMetadataRequested;
    <BWFaceDetector> * _faceDetector;
    bool  _flashEnabled;
    NSDictionary * _focusPositionToLensMakersPFLLinearFit;
    NSDictionary * _geometricDistortionCoefficients;
    bool  _grabNextFrame;
    float  _gravityFactor;
    bool  _handlesHDRReferenceFrameReporting;
    bool  _hasFocus;
    NSMutableDictionary * _keypointDetectionConfiguration;
    bool  _keypointDetectionConfigured;
    bool  _keypointDetectionEnabled;
    int  _lastStillImageCaptureType;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastStillImagePTS;
    bool  _ltmLookUpTableMetadataEnabled;
    bool  _lumaHistogramMetadataEnabled;
    int  _masterToSlaveFrameRateRatio;
    float  _maximumFrameRate;
    float  _minimumFrameRate;
    NSDictionary * _moduleInfo;
    bool  _motionDataInvalid;
    bool  _multiBandNoiseReductionEnabled;
    bool  _multiStreamEnabled;
    NSDictionary * _opticalCenter;
    float  _pixelSize;
    NSString * _portType;
    bool  _providesPreBracketedEV0;
    int  _receivedImagesOrErrorsForCaptureStillImageNow;
    NSDictionary * _sensorIDDictionary;
    int  _skippedFramesCountForAF;
    bool  _sphereEnabled;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _sphereLock;
    BWSphereModeSelector * _sphereModeSelector;
    NSMutableArray * _stillFusionBracketFramesMetadata;
    id /* block */  _stillImageBufferTimeMachineHandler;
    <BWFigVideoCaptureStreamStillImageCaptureDelegate> * _stillImageCaptureDelegate;
    NSObject<OS_dispatch_group> * _stillImageCaptureDelegateDispatchGroup;
    bool  _stillImageCaptureEnabled;
    int  _stillImageCaptureStateLock;
    bool  _stillImageKeypointDetectionEnabled;
    NSDictionary * _stillImageNoiseReductionAndSharpeningConfiguration;
    struct OpaqueFigCaptureStream { } * _stream;
    NSObject<OS_dispatch_queue> * _streamNotificationDispatchQueue;
    bool  _streaming;
    bool  _streamingEnabledWhenConfiguredAsSlave;
    NSArray * _supportedFormats;
    NSDictionary * _supportedProperties;
    bool  _synchronizedStreamsEnabled;
    BWStillImageTimeMachine * _timeMachine;
    int  _timeMachineCapacity;
    bool  _timeMachineEnabled;
    bool  _usesStillFusionReferenceFramePTSForDidCaptureCallback;
}

@property (nonatomic, readonly) int activeStillImageCaptureType;
@property (nonatomic) float aeMaxGain;
@property (readonly) NSDictionary *attributes;
@property (nonatomic, readonly) int autoFocusPositionSensorMode;
@property (nonatomic) bool avoidsSphereRecentering;
@property (readonly) float baseZoomFactor;
@property (nonatomic, readonly) int bracketedCaptureSequenceNumberForOISLongExposure;
@property (nonatomic) bool defersFaceDetectionStartup;
@property (nonatomic) <BWFigVideoCaptureStreamDelegate> *delegate;
@property (nonatomic) bool enablesSphereWhenAvailable;
@property (readonly) NSData *extrinsicMatrix;
@property (nonatomic, retain) <BWFaceDetector> *faceDetector;
@property (readonly) NSDictionary *focusPositionToLensMakersPFLLinearFit;
@property (readonly) NSDictionary *geometricDistortionCoefficients;
@property (readonly) float gravityFactor;
@property (nonatomic) bool handlesHDRReferenceFrameReporting;
@property (readonly) bool hasFocus;
@property (readonly) bool hasSphere;
@property (nonatomic) bool isStationary;
@property (nonatomic) bool keypointDetectionEnabled;
@property (nonatomic, readonly) int lastStillImageCaptureType;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } lastStillImagePTS;
@property (nonatomic) bool lowPowerSphereModeEnabled;
@property (nonatomic) bool ltmLookUpTableMetadataEnabled;
@property (nonatomic) bool lumaHistogramMetadataEnabled;
@property (nonatomic, readonly) float maximumAllowedFrameRate;
@property (nonatomic) float maximumFrameRate;
@property (nonatomic, readonly) float minimumAllowedFrameRate;
@property (nonatomic) float minimumFrameRate;
@property (readonly) NSDictionary *moduleInfo;
@property (readonly) bool motionDataInvalid;
@property (nonatomic) bool multiBandNoiseReductionEnabled;
@property (readonly) bool multiStreamEnabled;
@property (readonly) NSDictionary *opticalCenter;
@property (readonly) float pixelSize;
@property (readonly) NSString *portType;
@property (nonatomic, readonly) bool providesPreBracketedEV0;
@property (readonly) NSDictionary *sensorIDDictionary;
@property (readonly) NSString *sensorIDString;
@property (readonly) bool sphereEnabled;
@property (nonatomic) int sphereThermalLevel;
@property (nonatomic) bool sphereVideoEnabled;
@property (readonly) bool sphereVideoSupported;
@property (nonatomic, copy) id /* block */ stillImageBufferTimeMachineHandler;
@property (nonatomic) <BWFigVideoCaptureStreamStillImageCaptureDelegate> *stillImageCaptureDelegate;
@property (nonatomic) bool stillImageCaptureEnabled;
@property (nonatomic) bool stillImageKeypointDetectionEnabled;
@property (readonly) NSDictionary *stillImageNoiseReductionAndSharpeningConfiguration;
@property (readonly) struct OpaqueFigCaptureStream { }*stream;
@property (nonatomic, readonly) bool streaming;
@property (readonly) NSArray *supportedFormats;
@property (readonly) bool synchronizedStreamsEnabled;
@property (readonly) int timeMachineCapacity;
@property (nonatomic) bool timeMachineEnabled;
@property (nonatomic) bool usesStillFusionReferenceFramePTSForDidCaptureCallback;

+ (void)initialize;

- (id)_activeFormatNumberValueForKey:(struct __CFString { }*)arg1;
- (void)_addCaptureStreamAttachmentsToSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_addStillImageBracketFrameMetadataToSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_configureKeypointDetection;
- (void)_handleStillImageSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 withError:(int)arg2 fromTimeMachine:(bool)arg3;
- (void)_prepareForStillImageCaptureWithStillImageSettings:(id)arg1 fromCMTimeMachine:(bool)arg2;
- (void)_resetStillImageCaptureState;
- (void)_serviceTimeMachineWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_setFaceDetectionEnabled:(bool)arg1;
- (void)_updateAutoFocusPositionSensorModeForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (bool)_updateCaptureStateWithStillImageSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 orError:(int)arg2;
- (int)_updateFaceDetectionConfigurationOnStream:(id)arg1;
- (void)_updateFaceDetectionEnabledOnStream;
- (void)_updateMotionDataStatus:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_updateSphereMode;
- (long long)activeFormatIndex;
- (int)activeStillImageCaptureType;
- (float)aeMaxGain;
- (id)attributes;
- (int)autoFocusPositionSensorMode;
- (bool)avoidsSphereRecentering;
- (float)baseZoomFactor;
- (int)bracketedCaptureSequenceNumberForOISLongExposure;
- (void)captureStillImageFromTimeMachineWithStillImageSettings:(id)arg1;
- (void)dealloc;
- (bool)defersFaceDetectionStartup;
- (id)delegate;
- (void)enableFaceDetectionForAutoFocus;
- (bool)enablesSphereWhenAvailable;
- (id)extrinsicMatrix;
- (id)faceDetector;
- (void)failedToCaptureStillImageFromFirmwareWithError:(int)arg1;
- (id)focusPositionToLensMakersPFLLinearFit;
- (id)geometricDistortionCoefficients;
- (float)gravityFactor;
- (bool)handlesHDRReferenceFrameReporting;
- (bool)hasFocus;
- (bool)hasSphere;
- (id)initWithFigCaptureStream:(struct OpaqueFigCaptureStream { }*)arg1 attributes:(id)arg2 sensorIDDictionary:(id)arg3 synchronizedStreamsEnabled:(bool)arg4 extrinsicMatrix:(id)arg5;
- (bool)isStationary;
- (bool)keypointDetectionEnabled;
- (int)lastStillImageCaptureType;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })lastStillImagePTS;
- (bool)lowPowerSphereModeEnabled;
- (bool)ltmLookUpTableMetadataEnabled;
- (bool)lumaHistogramMetadataEnabled;
- (float)maximumAllowedFrameRate;
- (float)maximumFrameRate;
- (float)minimumAllowedFrameRate;
- (float)minimumFrameRate;
- (id)moduleInfo;
- (bool)motionDataInvalid;
- (bool)multiBandNoiseReductionEnabled;
- (bool)multiStreamEnabled;
- (id)opticalCenter;
- (float)pixelSize;
- (id)portType;
- (void)prepareForStillImageCaptureFromFirmwareWithStillImageSettings:(id)arg1;
- (bool)providesPreBracketedEV0;
- (void)registerForFaceDetectionMetadata;
- (id)sensorIDDictionary;
- (id)sensorIDString;
- (int)setActiveFormatIndex:(long long)arg1;
- (void)setAeMaxGain:(float)arg1;
- (void)setAvoidsSphereRecentering:(bool)arg1;
- (void)setDefersFaceDetectionStartup:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnablesSphereWhenAvailable:(bool)arg1;
- (void)setFaceDetectionConfiguration:(id)arg1;
- (void)setFaceDetector:(id)arg1;
- (void)setHandlesHDRReferenceFrameReporting:(bool)arg1;
- (void)setIsStationary:(bool)arg1;
- (void)setKeypointDetectionEnabled:(bool)arg1;
- (void)setLowPowerSphereModeEnabled:(bool)arg1;
- (void)setLtmLookUpTableMetadataEnabled:(bool)arg1;
- (void)setLumaHistogramMetadataEnabled:(bool)arg1;
- (void)setMaximumFrameRate:(float)arg1;
- (void)setMinimumFrameRate:(float)arg1;
- (void)setMotionDataInvalid:(bool)arg1;
- (void)setMultiBandNoiseReductionEnabled:(bool)arg1;
- (void)setSphereThermalLevel:(int)arg1;
- (void)setSphereVideoEnabled:(bool)arg1;
- (void)setStillImageBufferTimeMachineHandler:(id /* block */)arg1;
- (void)setStillImageCaptureDelegate:(id)arg1;
- (void)setStillImageCaptureEnabled:(bool)arg1;
- (void)setStillImageKeypointDetectionEnabled:(bool)arg1;
- (void)setStreamingEnabledWhenConfiguredAsSlave:(bool)arg1 masterToSlaveFrameRateRatio:(int)arg2;
- (void)setTimeMachineEnabled:(bool)arg1;
- (void)setUsesStillFusionReferenceFramePTSForDidCaptureCallback:(bool)arg1;
- (void)sourceNodeDidStartStreaming;
- (void)sourceNodeDidStopStreaming;
- (void)sourceNodeWillDiscardVideoSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)sourceNodeWillEmitDepthSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)sourceNodeWillEmitDetectedFacesSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)sourceNodeWillEmitStillImageQuadraBufferProcessingError:(int)arg1;
- (void)sourceNodeWillEmitStillImageSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)sourceNodeWillEmitVideoPreviewSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)sourceNodeWillEmitVideoSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)sourceNodeWillStartStreaming;
- (void)sourceNodeWillStopStreaming;
- (bool)sphereEnabled;
- (int)sphereThermalLevel;
- (bool)sphereVideoEnabled;
- (bool)sphereVideoSupported;
- (void)startupFaceDetectionIfNeeded;
- (id /* block */)stillImageBufferTimeMachineHandler;
- (id)stillImageCaptureDelegate;
- (bool)stillImageCaptureEnabled;
- (bool)stillImageKeypointDetectionEnabled;
- (id)stillImageNoiseReductionAndSharpeningConfiguration;
- (struct OpaqueFigCaptureStream { }*)stream;
- (bool)streaming;
- (id)supportedFormats;
- (bool)supportsProperty:(struct __CFString { }*)arg1;
- (bool)synchronizedStreamsEnabled;
- (int)timeMachineCapacity;
- (bool)timeMachineEnabled;
- (void)unregisterForFaceDetectionMetadata;
- (bool)usesStillFusionReferenceFramePTSForDidCaptureCallback;
- (void)willCaptureStillImageFromFirmware;

@end
