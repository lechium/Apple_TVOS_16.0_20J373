//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface MLProbabilityDictionaryArrayStorage : NSObject
{
    NSArray *_array;	// 8 = 0x8
    unsigned long long _count;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000018db58
- (unsigned long long)count;	// IMP=0x000000000018db4e
- (unsigned long long)maxElementIndex;	// IMP=0x000000000018da12
- (id)probabilityAtIndex:(unsigned long long)arg1;	// IMP=0x000000000018d982
- (id)initWithArray:(id)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000018d884

@end

