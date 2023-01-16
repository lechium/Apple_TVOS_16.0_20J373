//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableData;

@interface ASCHasher : NSObject
{
    _Bool _isFinalized;	// 8 = 0x8
    NSMutableData *_buffer;	// 16 = 0x10
}

+ (unsigned long long)executionSeed;	// IMP=0x002000000000b842
- (void).cxx_destruct;	// IMP=0x002000000000bc61
@property(nonatomic) _Bool isFinalized; // @synthesize isFinalized=_isFinalized;
@property(readonly, nonatomic) NSMutableData *buffer; // @synthesize buffer=_buffer;
- (unsigned long long)finalizeHash;	// IMP=0x001000000000bb52
- (void)combineObject:(id)arg1;	// IMP=0x001000000000bb0e
- (void)combineUnsignedInteger:(unsigned long long)arg1;	// IMP=0x001000000000babb
- (void)combineInteger:(long long)arg1;	// IMP=0x001000000000ba68
- (void)combineDouble:(double)arg1;	// IMP=0x001000000000ba15
- (void)combineBool:(_Bool)arg1;	// IMP=0x001000000000b9c2
- (void)combineBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x001000000000b91a
- (id)init;	// IMP=0x001000000000b884

@end

