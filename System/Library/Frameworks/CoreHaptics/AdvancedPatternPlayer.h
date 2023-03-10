//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVHapticSequence, NSString;

__attribute__((visibility("hidden")))
@interface AdvancedPatternPlayer
{
    AVHapticSequence *_sequence;	// 48 = 0x30
    double _loopEnd;	// 56 = 0x38
    int _state;	// 64 = 0x40
    double _seekOffset;	// 72 = 0x48
    CDUnknownBlockType _completionHandler;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000000cd18
@property double seekOffset; // @synthesize seekOffset=_seekOffset;
- (_Bool)earlyUnduckAudioAtTime:(double)arg1 error:(id *)arg2;	// IMP=0x000000000000cb91
- (_Bool)setVolume:(float)arg1 atTime:(double)arg2 error:(id *)arg3;	// IMP=0x000000000000cb3b
- (_Bool)activateChannelByIndex:(unsigned long long)arg1 atTime:(double)arg2 error:(id *)arg3;	// IMP=0x000000000000cae5
- (id)initWithVibePatternDictionary:(id)arg1 engine:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000c7f0
- (id)initWithRingtoneData:(id)arg1 engine:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000c526
@property(copy) CDUnknownBlockType completionHandler;
@property _Bool isMuted;
@property float playbackRate;
@property double loopEnd;
@property _Bool loopEnabled;
@property(readonly) _Bool paused;
@property(readonly) _Bool running;
- (double)patternDuration;	// IMP=0x000000000000ba24
- (_Bool)cancelAndReturnError:(id *)arg1;	// IMP=0x000000000000b916
- (_Bool)seekToOffset:(double)arg1 error:(id *)arg2;	// IMP=0x000000000000b6a1
- (_Bool)resumeAtTime:(double)arg1 error:(id *)arg2;	// IMP=0x000000000000b464
- (_Bool)pauseAtTime:(double)arg1 error:(id *)arg2;	// IMP=0x000000000000b16e
- (_Bool)scheduleParameterCurve:(id)arg1 atTime:(double)arg2 error:(id *)arg3;	// IMP=0x000000000000afd2
- (_Bool)sendParameters:(id)arg1 atTime:(double)arg2 error:(id *)arg3;	// IMP=0x000000000000a8ec
- (_Bool)stopAtTime:(double)arg1 error:(id *)arg2;	// IMP=0x000000000000a439
- (_Bool)startAtTime:(double)arg1 error:(id *)arg2;	// IMP=0x000000000000a0cb
- (_Bool)doResumeAtTime:(double)arg1 error:(id *)arg2;	// IMP=0x0000000000009e65
- (_Bool)doStartFromPausedAtTime:(double)arg1 error:(id *)arg2;	// IMP=0x0000000000009c43
- (_Bool)doStartFromStoppedAtTime:(double)arg1 error:(id *)arg2;	// IMP=0x0000000000009928
- (void)clearExternalResources:(id)arg1;	// IMP=0x00000000000096a3
- (void)doSetMute:(_Bool)arg1;	// IMP=0x000000000000953b
- (void)dealloc;	// IMP=0x00000000000093b1
- (id)initWithPattern:(id)arg1 engine:(id)arg2 privileged:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0000000000008c0b
- (id)init;	// IMP=0x0000000000008bfd
- (void)finishInit;	// IMP=0x000000000000887c
- (void)setPaused;	// IMP=0x0000000000008868
- (void)setRunning;	// IMP=0x0000000000008854
- (void)resetState;	// IMP=0x0000000000008840

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

