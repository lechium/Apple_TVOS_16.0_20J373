//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIKBRTTouchHistory : NSObject
{
    NSMutableArray *_history;	// 8 = 0x8
    struct CGPoint _historyOffset;	// 16 = 0x10
    double _lastDecayTime;	// 32 = 0x20
    _Bool _isLeftHand;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000af87af
@property(nonatomic) _Bool isLeftHand; // @synthesize isLeftHand=_isLeftHand;
- (void)_updateOffset;	// IMP=0x0000000000af84d5
- (void)reset;	// IMP=0x0000000000af84a6
- (void)_decayHistoryToSize:(unsigned long long)arg1;	// IMP=0x0000000000af80fb
- (void)_sortHistory;	// IMP=0x0000000000af7e8e
- (void)decayHistory;	// IMP=0x0000000000af7e77
- (void)clearHistory;	// IMP=0x0000000000af7df7
- (void)adjustHistoryOffset:(struct CGPoint)arg1;	// IMP=0x0000000000af7ce2
- (void)removeInfo:(id)arg1;	// IMP=0x0000000000af7c79
- (void)addInfo:(id)arg1;	// IMP=0x0000000000af7c47
- (_Bool)containsInfo:(id)arg1;	// IMP=0x0000000000af7c31
@property(readonly, nonatomic) struct CGPoint historyOffset;
@property(readonly, nonatomic) double lastTime;
@property(readonly, nonatomic) _Bool hasHistory;
- (void)dealloc;	// IMP=0x0000000000af7a5b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000af7a11
- (id)initWithIsLeftHand:(_Bool)arg1;	// IMP=0x0000000000af79cc

@end

