//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface HMFetchAnisetteDataRequest
{
    _Bool _shouldProvision;	// 8 = 0x8
}

+ (id)xpcMessageName;	// IMP=0x0010000000052f97
+ (id)messageName;	// IMP=0x0010000000052f8a
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000052f82
+ (id)objWithMessage:(id)arg1;	// IMP=0x0010000000052deb
+ (id)objWithDict:(id)arg1;	// IMP=0x0010000000052c76
@property(nonatomic) _Bool shouldProvision; // @synthesize shouldProvision=_shouldProvision;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000052bdd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000052b57
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDictionary *messagePayload;
@property(readonly, copy, nonatomic) NSString *xpcMessageName;
@property(readonly, copy, nonatomic) NSString *messageName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

