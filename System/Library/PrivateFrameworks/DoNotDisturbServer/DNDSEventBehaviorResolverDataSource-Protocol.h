//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DoNotDisturbServer/NSObject-Protocol.h>

@class DNDApplicationIdentifier, DNDBypassSettings, DNDConfiguration, DNDSEventBehaviorResolver, DNDState, NSPredicate, NSString;

@protocol DNDSEventBehaviorResolverDataSource <NSObject>
- (NSPredicate *)eventBehaviorResolver:(DNDSEventBehaviorResolver *)arg1 appPredicateForApplicationIdentifier:(DNDApplicationIdentifier *)arg2 modeIdentifier:(NSString *)arg3;
- (_Bool)eventBehaviorResolver:(DNDSEventBehaviorResolver *)arg1 isAvailabilityActiveForBundleIdentifier:(NSString *)arg2;
- (DNDConfiguration *)eventBehaviorResolver:(DNDSEventBehaviorResolver *)arg1 configurationForModeIdentifier:(NSString *)arg2;
- (DNDBypassSettings *)eventBehaviorResolver:(DNDSEventBehaviorResolver *)arg1 bypassSettingsForClientIdentifier:(NSString *)arg2;
- (unsigned long long)currentUILockStateForEventBehaviorResolver:(DNDSEventBehaviorResolver *)arg1;
- (DNDState *)currentStateForEventBehaviorResolver:(DNDSEventBehaviorResolver *)arg1;
@end

