//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSError, NSString, VSAudioData, VSInstrumentMetrics, VSPresynthesizedAudioRequest, VSPreviewRequest, VSSpeechConnection, VSSpeechRequest;

@protocol VSSpeechConnectionDelegate
- (void)connection:(VSSpeechConnection *)arg1 invalidatedWithError:(NSError *)arg2;
- (void)connection:(VSSpeechConnection *)arg1 previewRequestDidStartPlaying:(VSPreviewRequest *)arg2;
- (void)connection:(VSSpeechConnection *)arg1 presynthesizedAudioRequest:(VSPresynthesizedAudioRequest *)arg2 successWithInstrumentMetrics:(VSInstrumentMetrics *)arg3 error:(NSError *)arg4;
- (void)connection:(VSSpeechConnection *)arg1 presynthesizedAudioRequest:(VSPresynthesizedAudioRequest *)arg2 didStopAtEnd:(_Bool)arg3 error:(NSError *)arg4;
- (void)connection:(VSSpeechConnection *)arg1 presynthesizedAudioRequestDidStart:(VSPresynthesizedAudioRequest *)arg2;
- (void)connection:(VSSpeechConnection *)arg1 synthesisRequest:(VSSpeechRequest *)arg2 didFinishWithInstrumentMetrics:(VSInstrumentMetrics *)arg3 error:(NSError *)arg4;
- (void)connection:(VSSpeechConnection *)arg1 speechRequest:(VSSpeechRequest *)arg2 didGenerateAudioChunk:(VSAudioData *)arg3;
- (void)connection:(VSSpeechConnection *)arg1 speechRequest:(VSSpeechRequest *)arg2 didReceiveTimingInfo:(NSArray *)arg3;
- (void)connection:(VSSpeechConnection *)arg1 speechRequest:(VSSpeechRequest *)arg2 successWithInstrumentMetrics:(VSInstrumentMetrics *)arg3;
- (void)connection:(VSSpeechConnection *)arg1 speechRequest:(VSSpeechRequest *)arg2 willSpeakMark:(long long)arg3 inRange:(struct _NSRange)arg4;
- (void)connection:(VSSpeechConnection *)arg1 speechRequest:(VSSpeechRequest *)arg2 didStopAtEnd:(_Bool)arg3 phonemesSpoken:(NSString *)arg4 error:(NSError *)arg5;
- (void)connection:(VSSpeechConnection *)arg1 speechRequestDidContinue:(VSSpeechRequest *)arg2;
- (void)connection:(VSSpeechConnection *)arg1 speechRequestDidPause:(VSSpeechRequest *)arg2;
- (void)connection:(VSSpeechConnection *)arg1 speechRequestDidStart:(VSSpeechRequest *)arg2;
@end

