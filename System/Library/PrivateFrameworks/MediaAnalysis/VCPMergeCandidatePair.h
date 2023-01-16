//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCPMergeCandidatePair : NSObject
{
    unsigned long long _hash;	// 8 = 0x8
    NSString *_person1LocalIdentifier;	// 16 = 0x10
    NSString *_person2LocalIdentifier;	// 24 = 0x18
    NSString *_reason;	// 32 = 0x20
}

+ (id)mergeCandidatePairWithPerson:(id)arg1 andPerson:(id)arg2 reason:(id)arg3;	// IMP=0x00600000000f9b64
- (void).cxx_destruct;	// IMP=0x00000000000fa06f
@property(readonly) NSString *reason; // @synthesize reason=_reason;
@property(readonly) NSString *person2LocalIdentifier; // @synthesize person2LocalIdentifier=_person2LocalIdentifier;
@property(readonly) NSString *person1LocalIdentifier; // @synthesize person1LocalIdentifier=_person1LocalIdentifier;
- (id)description;	// IMP=0x00000000000f9f78
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f9d32
- (unsigned long long)hash;	// IMP=0x00000000000f9d28
- (id)initWithPerson:(id)arg1 andPerson:(id)arg2 reason:(id)arg3;	// IMP=0x00000000000f9c0f

@end

