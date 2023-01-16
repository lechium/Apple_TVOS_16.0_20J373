//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SwiftUI/UIFocusEnvironment-Protocol.h>

@class NSArray;

@protocol _UIFocusEnvironmentPrivate <UIFocusEnvironment>

@optional
- (void)_setNeedsNonDeferredFocusUpdate;
- (NSArray *)_linearFocusMovementSequences;
- (long long)_preferredFocusMovementStyle;
- (_Bool)_isEligibleForFocusOcclusion;
- (_Bool)_isEligibleForFocusInteraction;
- (_Bool)_allowsFocusToLeaveViaHeading:(unsigned long long)arg1;
@property(nonatomic) _Bool areChildrenFocused;

// Remaining properties
@property(nonatomic, readonly) _Bool eligibleForFocusInteraction;
@property(nonatomic, readonly) _Bool eligibleForFocusOcclusion;
@property(nonatomic, readonly) NSArray *linearFocusMovementSequences;
@property(nonatomic, readonly) long long preferredFocusMovementStyle;
@end

