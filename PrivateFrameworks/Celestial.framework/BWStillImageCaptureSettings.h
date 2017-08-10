/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWStillImageCaptureSettings : NSObject {
    unsigned long long  _captureFlags;
    NSArray * _captureStreamSettings;
    int  _captureType;
    bool  _deliverOriginalImage;
    bool  _deliverProcessedImage;
    bool  _deliverSushiRaw;
    long long  _settingsID;
    int  _tempExpectedClientImageCount;
}

@property (nonatomic, readonly) int bracketedCaptureSequenceNumberForOISLongExposure;
@property (nonatomic, readonly) unsigned long long captureFlags;
@property (nonatomic, readonly) NSArray *captureStreamSettings;
@property (nonatomic, readonly) int captureType;
@property (nonatomic, readonly) bool deliverOriginalImage;
@property (nonatomic, readonly) bool deliverProcessedImage;
@property (nonatomic, readonly) bool deliverSushiRaw;
@property (nonatomic, readonly) bool expectReferenceFrameBracketedCaptureSequenceNumber;
@property (nonatomic) int expectedClientImageCount;
@property (nonatomic, readonly) long long settingsID;

- (int)bracketedCaptureSequenceNumberForOISLongExposure;
- (unsigned long long)captureFlags;
- (id)captureStreamSettings;
- (id)captureStreamSettingsForPortType:(id)arg1;
- (int)captureType;
- (void)dealloc;
- (bool)deliverOriginalImage;
- (bool)deliverProcessedImage;
- (bool)deliverSushiRaw;
- (id)description;
- (bool)expectReferenceFrameBracketedCaptureSequenceNumber;
- (int)expectedClientImageCount;
- (id)initWithSettingsID:(long long)arg1 captureType:(int)arg2 captureFlags:(unsigned long long)arg3 deliverProcessedImage:(bool)arg4 deliverOriginalImage:(bool)arg5 deliverSushiRaw:(bool)arg6 captureStreamSettings:(id)arg7;
- (void)setExpectedClientImageCount:(int)arg1;
- (long long)settingsID;

@end
