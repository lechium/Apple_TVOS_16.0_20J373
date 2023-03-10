//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VSApplicationControllerRequestFactory : NSObject
{
}

+ (id)_logoutSAMLRequestStringWithError:(id *)arg1;	// IMP=0x0080000000058b48
+ (id)_attributeQuerySAMLRequestStringWithAttributeNames:(id)arg1 channelID:(id)arg2 authenticationToken:(id)arg3 error:(id *)arg4;	// IMP=0x0080000000058ae2
+ (id)_authNRequestSAMLStringWithAuthenticationToken:(id)arg1 forced:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0080000000058a7c
- (id)STBOptOutApplicationControllerRequest;	// IMP=0x0000000000058a44
- (id)logoutApplicationControllerRequestWithAuthenticationToken:(id)arg1;	// IMP=0x0000000000058977
- (id)accountMetadataApplicationControllerRequestWithAccountMetadataRequest:(id)arg1 authenticationToken:(id)arg2;	// IMP=0x000000000005879f
- (id)authenticationApplicationControllerRequestWithAuthenticationToken:(id)arg1 forcedAuthentication:(_Bool)arg2;	// IMP=0x0000000000058677
- (id)silentAuthenticationApplicationControllerRequest;	// IMP=0x000000000005863f
- (id)silentAuthenticationApplicationControllerRequestWithAuthenticationToken:(id)arg1 forcedAuthentication:(_Bool)arg2;	// IMP=0x0000000000058517

@end

