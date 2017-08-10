/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDictationConnection : NSObject <AFDictationDelegate> {
    AFDictationConnection * _connection;
    <UIDictationConnectionDelegate> * _delegate;
    bool  _offlineOnly;
    <UIDictationConnectionTokenFilterProtocol> * _tokenFilter;
}

@property (nonatomic, retain) AFDictationConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIDictationConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool offlineOnly;
@property (readonly) Class superclass;
@property (nonatomic) <UIDictationConnectionTokenFilterProtocol> *tokenFilter;

+ (void)_updateFromGlobalOptions:(id)arg1;
+ (void)afDelegate:(id)arg1 didReceiveSearchResults:(id)arg2 recognizedText:(id)arg3 stable:(bool)arg4 final:(bool)arg5;
+ (void)cacheSupportedDictationLanguages;
+ (bool)dictationIsSupportedForLanguageCode:(id)arg1 error:(id*)arg2;
+ (bool)dictationRestricted;
+ (id)interpretationFromSpeechTokens:(id)arg1 startIndex:(unsigned long long)arg2 filterBlock:(id /* block */)arg3;
+ (bool)isDictationAvailable;

- (void).cxx_destruct;
- (id)_createConnectionOptions;
- (id)_dictationOptions:(id)arg1;
- (id)_initializeWithOptions:(id)arg1;
- (id)_speechOptions:(id)arg1;
- (void)_startWithOptions:(id)arg1;
- (float)averagePower;
- (void)beginAvailabilityMonitoring;
- (void)cancelAvailabilityMonitoring;
- (void)cancelSpeech;
- (id)connection;
- (id)delegate;
- (void)dictationConnection:(id)arg1 didReceiveSearchResults:(id)arg2 recognizedText:(id)arg3 stable:(bool)arg4 final:(bool)arg5;
- (void)dictationConnection:(id)arg1 didRecognizePhrases:(id)arg2 languageModel:(id)arg3 correctionIdentifier:(id)arg4;
- (void)dictationConnection:(id)arg1 didRecognizeTokens:(id)arg2 languageModel:(id)arg3;
- (void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;
- (void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
- (void)dictationConnectionSpeechRecognitionDidSucceed:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidBegin:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidCancel:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidEnd:(id)arg1;
- (void)dictationConnectionSpeechRecordingWillBegin:(id)arg1;
- (void)dictationConnnectionDidChangeAvailability:(id)arg1;
- (bool)dictationIsAvailableForLanguage:(id)arg1;
- (void)endSession;
- (bool)offlineOnly;
- (void)preheat;
- (void)restartDictation;
- (void)sendSpeechCorrection:(id)arg1 forIdentifier:(id)arg2;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOfflineOnly:(bool)arg1;
- (void)setSuppressStopAlert:(bool)arg1;
- (void)setTokenFilter:(id)arg1;
- (void)start;
- (void)startForFileAtURL:(id)arg1 forLanguage:(id)arg2;
- (void)stopSpeech;
- (void)stopSpeechWithoutAlert;
- (id)tokenFilter;

@end
