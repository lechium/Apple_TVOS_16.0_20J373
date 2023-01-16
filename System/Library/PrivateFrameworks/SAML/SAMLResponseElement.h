//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSString, SAMLSignature, SAMLStatus;

__attribute__((visibility("hidden")))
@interface SAMLResponseElement
{
}

+ (id)createElement:(id *)arg1;	// IMP=0x006000000000a87c
- (id)authnStatement;	// IMP=0x000000000000af13
- (_Bool)assertionMeetsConditions:(id *)arg1;	// IMP=0x000000000000acea
@property(readonly, nonatomic) NSArray *assertions;
@property(readonly, nonatomic) SAMLStatus *status;
@property(readonly, nonatomic) SAMLSignature *signature;
@property(readonly, nonatomic) NSString *issuer;
@property(readonly, nonatomic) NSString *consent;
@property(readonly, nonatomic) NSString *destination;
@property(readonly, nonatomic) NSDate *issueInstant;
@property(readonly, nonatomic) NSString *relatedRequest;
@property(readonly, nonatomic) NSString *identifier;

@end
