//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface HMLegacyAnisetteDataRequest
{
    NSString *_dsid;	// 8 = 0x8
}

+ (id)xpcMessageName;	// IMP=0x0010000000053bd1
+ (id)messageName;	// IMP=0x0010000000053bc4
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000053bbc
+ (id)objWithMessage:(id)arg1;	// IMP=0x0010000000053a25
+ (id)objWithDict:(id)arg1;	// IMP=0x00100000000538b0
- (void).cxx_destruct;	// IMP=0x000000000005389d
@property(copy, nonatomic) NSString *dsid; // @synthesize dsid=_dsid;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000537e0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000053745
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDictionary *messagePayload;
@property(readonly, copy, nonatomic) NSString *xpcMessageName;
@property(readonly, copy, nonatomic) NSString *messageName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

