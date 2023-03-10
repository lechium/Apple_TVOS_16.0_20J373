//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface ICContentKeyStoreEntry : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSData *_keyData;	// 16 = 0x10
    NSDate *_renewalDate;	// 24 = 0x18
    unsigned long long _failureCount;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000d6260
@property(nonatomic) unsigned long long failureCount; // @synthesize failureCount=_failureCount;
@property(copy, nonatomic) NSDate *renewalDate; // @synthesize renewalDate=_renewalDate;
@property(copy, nonatomic) NSData *keyData; // @synthesize keyData=_keyData;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)dictionaryRepresentation;	// IMP=0x00000000000d60d1
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x00000000000d5f8b
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000000000d5f20

@end

