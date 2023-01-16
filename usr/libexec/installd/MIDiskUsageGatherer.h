//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MIDiskUsageGatherer : NSObject
{
    _Bool _calcStatic;	// 8 = 0x8
    _Bool _calcDynamic;	// 9 = 0x9
    _Bool _calcShared;	// 10 = 0xa
    NSArray *_identifiers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000022276
@property(readonly, nonatomic) _Bool calcShared; // @synthesize calcShared=_calcShared;
@property(readonly, nonatomic) _Bool calcDynamic; // @synthesize calcDynamic=_calcDynamic;
@property(readonly, nonatomic) _Bool calcStatic; // @synthesize calcStatic=_calcStatic;
@property(readonly, nonatomic) NSArray *identifiers; // @synthesize identifiers=_identifiers;
- (id)gatherUsageInfoWithError:(id *)arg1;	// IMP=0x0010000000021f9d
- (id)_gatherForIdentifier:(id)arg1;	// IMP=0x00100000000219a4
- (id)initWithIdentifiers:(id)arg1 options:(id)arg2;	// IMP=0x001000000002186c

@end

