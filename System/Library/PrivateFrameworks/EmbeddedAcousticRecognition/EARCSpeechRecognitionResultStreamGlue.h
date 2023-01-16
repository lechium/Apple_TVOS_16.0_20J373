//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EARCSpeechRecognitionResultStreamGlue : NSObject
{
    struct EARCSpeechRecognitionResultStream _stream;	// 8 = 0x8
}

- (void)speechRecognizer:(id)arg1 didProcessAudioDuration:(double)arg2;	// IMP=0x00000000004a6c6b
- (void)speechRecognizer:(id)arg1 didRecognizeFinalResults:(id)arg2 tokenSausage:(id)arg3 nBestChoices:(id)arg4;	// IMP=0x00000000004a6c4f
- (void)speechRecognizer:(id)arg1 didRecognizeFinalResults:(id)arg2;	// IMP=0x00000000004a6c49
- (void)speechRecognizer:(id)arg1 didFinishRecognitionWithError:(id)arg2;	// IMP=0x00000000004a6c30
- (void)speechRecognizer:(id)arg1 didRecognizePartialResult:(id)arg2;	// IMP=0x00000000004a6bf5
- (void)dealloc;	// IMP=0x00000000004a6bb5
- (id)initWithStream:(struct EARCSpeechRecognitionResultStream *)arg1;	// IMP=0x00000000004a6b65

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
