//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/NSObject-Protocol.h>

@class NSString, PTDomainInfo, PTProxySettingsDefinition, PTTestRecipeInfo;

@protocol PTDomainServer <NSObject>
- (void)registerRootSettingsProxyDefinition:(PTProxySettingsDefinition *)arg1 forDomainID:(NSString *)arg2;
- (void)registerTestRecipeWithInfo:(PTTestRecipeInfo *)arg1;
- (void)registerDomainWithInfo:(PTDomainInfo *)arg1;
@end
