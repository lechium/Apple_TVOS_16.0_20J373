//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIVisualEffectDifferenceEngine : NSObject
{
    long long _sourceCount;	// 8 = 0x8
    long long _destinationCount;	// 16 = 0x10
    long long _prefixCount;	// 24 = 0x18
    long long _suffixCount;	// 32 = 0x20
    long long _innerSourceCount;	// 40 = 0x28
    long long _innerDestinationCount;	// 48 = 0x30
    long long *_mergeTable;	// 56 = 0x38
    NSArray *_merged;	// 64 = 0x40
    NSArray *_source;	// 72 = 0x48
    NSArray *_destination;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000e59cd
@property(copy, nonatomic) NSArray *destination; // @synthesize destination=_destination;
@property(copy, nonatomic) NSArray *source; // @synthesize source=_source;
- (id)description;	// IMP=0x00000000000e57d4
- (id)describeMergeTable;	// IMP=0x00000000000e56bc
- (id)mergeSource:(id)arg1 andDestination:(id)arg2;	// IMP=0x00000000000e5605
@property(readonly, copy, nonatomic) NSArray *merged;
- (void)_calculate;	// IMP=0x00000000000e547e
- (void)_calculateMerge;	// IMP=0x00000000000e4c14
- (void)_calculateLCSSTable;	// IMP=0x00000000000e49ea
- (void)_calculatePrefixAndSuffix;	// IMP=0x00000000000e480a
- (void)_reset;	// IMP=0x00000000000e47dd
- (void)dealloc;	// IMP=0x00000000000e47a3

@end

