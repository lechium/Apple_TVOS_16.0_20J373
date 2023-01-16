//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface BMRKeyValuePair : NSObject
{
    id _key;	// 8 = 0x8
    id _value;	// 16 = 0x10
}

+ (id)pairWithKey:(id)arg1 value:(id)arg2;	// IMP=0x0040000000015e5e
- (void).cxx_destruct;	// IMP=0x0020000000015e36
@property(retain) id value; // @synthesize value=_value;
@property(retain) id key; // @synthesize key=_key;
- (unsigned long long)hash;	// IMP=0x0010000000015d63
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000015cfc
- (_Bool)isEqualToPair:(id)arg1;	// IMP=0x0010000000015c08
- (id)description;	// IMP=0x0010000000015bdb

@end

