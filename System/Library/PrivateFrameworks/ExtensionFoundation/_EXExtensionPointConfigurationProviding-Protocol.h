//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ExtensionFoundation/NSObject-Protocol.h>

@class NSDictionary;

@protocol _EXExtensionPointConfigurationProviding <NSObject>
@property(readonly) _Bool supportsNSExtensionPlistKeys;
@property(readonly) NSDictionary *requiredHostEntitlements;
@property(readonly) Class extensionContextClass;
@property(readonly) Class connectionHandlerClass;
@property(readonly) _Bool presentsUserInterface;
@property(readonly) Class extensionClass;
@property(readonly) Class principalClass;
@end

