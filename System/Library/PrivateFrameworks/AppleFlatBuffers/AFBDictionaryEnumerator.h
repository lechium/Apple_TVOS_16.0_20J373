//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSEnumerator.h>

@class AFBDictionary;

__attribute__((visibility("hidden")))
@interface AFBDictionaryEnumerator : NSEnumerator
{
    AFBDictionary *_dict;	// 8 = 0x8
    unsigned long long _index;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000012cc5
- (id)nextObject;	// IMP=0x0000000000012c5e
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000012be1

@end

