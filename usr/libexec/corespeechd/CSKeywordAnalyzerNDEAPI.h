//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableData;
@protocol CSKeywordAnalyzerNDEAPIScoreDelegate;

@interface CSKeywordAnalyzerNDEAPI : NSObject
{
    NSMutableData *_currentBlob;	// 8 = 0x8
    unsigned long long _activeChannel;	// 16 = 0x10
    id <CSKeywordAnalyzerNDEAPIScoreDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000004d09
@property(nonatomic) __weak id <CSKeywordAnalyzerNDEAPIScoreDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long activeChannel; // @synthesize activeChannel=_activeChannel;
- (void)reset;	// IMP=0x0010000000004cc8
- (id)processAudioChunk:(id)arg1;	// IMP=0x0010000000004cc0
- (id)processAudioBytes:(void *)arg1 withNumberOfSamples:(long long)arg2;	// IMP=0x0010000000004cb8
- (id)checkForTriggerWithBytes:(const short *)arg1 withNumberOfSamples:(long long)arg2;	// IMP=0x0010000000004cb0
- (void)dealloc;	// IMP=0x0010000000004c81
- (id)initWithBlob:(id)arg1;	// IMP=0x0010000000004c52

@end
