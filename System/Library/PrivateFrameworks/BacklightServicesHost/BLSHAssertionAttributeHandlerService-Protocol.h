//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BacklightServicesHost/BLSAssertionService-Protocol.h>

@protocol BLSAssertionServiceResponding, BLSHOSTimerProviding;

@protocol BLSHAssertionAttributeHandlerService <BLSAssertionService>
@property(readonly, nonatomic) id <BLSHOSTimerProviding> osTimerProvider;
- (void)willCancelAssertion:(id <BLSAssertionServiceResponding>)arg1;
- (void)resumeAssertion:(id <BLSAssertionServiceResponding>)arg1;
- (void)pauseAssertion:(id <BLSAssertionServiceResponding>)arg1;
@end

