//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CHDrawing, NSCharacterSet;

@interface CHClassifiableDrawing : NSObject
{
    _Bool _expandCodePoints;	// 8 = 0x8
    CHDrawing *_drawing;	// 16 = 0x10
    NSCharacterSet *_characterSet;	// 24 = 0x18
    unsigned long long _maxCandidateCount;	// 32 = 0x20
    struct CGRect _normalizationContext;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000002410
@property(readonly, nonatomic) unsigned long long maxCandidateCount; // @synthesize maxCandidateCount=_maxCandidateCount;
@property(readonly, nonatomic) struct CGRect normalizationContext; // @synthesize normalizationContext=_normalizationContext;
@property(readonly, nonatomic) _Bool expandCodePoints; // @synthesize expandCodePoints=_expandCodePoints;
@property(readonly, nonatomic) NSCharacterSet *characterSet; // @synthesize characterSet=_characterSet;
@property(readonly, nonatomic) CHDrawing *drawing; // @synthesize drawing=_drawing;
- (id)initWithDrawing:(id)arg1 characterSet:(id)arg2 expandCodePoints:(_Bool)arg3 normalizationContext:(struct CGRect)arg4 maxCandidateCount:(unsigned long long)arg5;	// IMP=0x00000000000022c0

@end

