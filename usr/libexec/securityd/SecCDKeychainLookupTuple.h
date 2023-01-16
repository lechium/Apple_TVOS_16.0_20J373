//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol NSCopying><NSObject, SecCDKeychainLookupValueType;

@interface SecCDKeychainLookupTuple : NSObject
{
    NSString *_key;	// 8 = 0x8
    id <NSCopying><NSObject> _value;	// 16 = 0x10
    NSString<SecCDKeychainLookupValueType> *_valueType;	// 24 = 0x18
}

+ (id)lookupTupleWithManagedLookupEntry:(id)arg1;	// IMP=0x00400000000402ca
+ (id)lookupTupleWithKey:(id)arg1 value:(id)arg2;	// IMP=0x001000000004025e
- (void).cxx_destruct;	// IMP=0x002000000004022b
@property(readonly, copy) NSString<SecCDKeychainLookupValueType> *valueType; // @synthesize valueType=_valueType;
@property(readonly, copy) id <NSCopying><NSObject> value; // @synthesize value=_value;
@property(readonly, copy) NSString *key; // @synthesize key=_key;
@property(readonly, copy) NSString *stringRepresentation;
- (id)description;	// IMP=0x00000000000400f1
- (unsigned long long)hash;	// IMP=0x0010000000040097
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000003ffa0
- (id)initWithKey:(id)arg1 value:(id)arg2;	// IMP=0x001000000003fe17

@end
