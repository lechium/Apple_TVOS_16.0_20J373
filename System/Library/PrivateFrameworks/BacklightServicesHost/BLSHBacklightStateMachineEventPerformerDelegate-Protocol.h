//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BacklightServicesHost/NSObject-Protocol.h>

@class BLSBacklightChangeEvent;
@protocol BLSHBacklightStateMachineEventPerforming;

@protocol BLSHBacklightStateMachineEventPerformerDelegate <NSObject>
- (void)eventPerformer:(id <BLSHBacklightStateMachineEventPerforming>)arg1 didUpdateDisplayStateForState:(long long)arg2 forEvent:(BLSBacklightChangeEvent *)arg3;
- (void)eventPerformer:(id <BLSHBacklightStateMachineEventPerforming>)arg1 willUpdateDisplayStateForState:(long long)arg2 forEvent:(BLSBacklightChangeEvent *)arg3;
- (void)eventPerformer:(id <BLSHBacklightStateMachineEventPerforming>)arg1 didUpdateVisualContentsToBeginTransitionToState:(long long)arg2 forEvent:(BLSBacklightChangeEvent *)arg3;
@end
