//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <KeyboardArbiter/NSObject-Protocol.h>

@class BKSAnimationFenceHandle, NSArray, NSDictionary, NSString, UIKBArbiterClientFocusContext, _UIKeyboardChangedInformation;

@protocol _UIKBArbiterInputEventsProtocol <NSObject>
- (void)retrieveMoreDebugInformationWithCompletion:(void (^)(NSArray *))arg1;
- (void)retrieveDebugInformation:(void (^)(NSString *))arg1;
- (void)setWindowHostingPID:(int)arg1 active:(_Bool)arg2;
- (void)setWantsFencing:(_Bool)arg1;
- (void)signalKeyboardChangeComplete;
- (void)signalKeyboardChanged:(_UIKeyboardChangedInformation *)arg1 onCompletion:(void (^)(void))arg2;
- (void)notifyHostedPIDsOfSuppression:(_Bool)arg1;
- (void)signalEventSourceChanged:(long long)arg1 completionHandler:(void (^)(void))arg2;
- (void)transition:(NSString *)arg1 eventStage:(unsigned long long)arg2 withInfo:(NSDictionary *)arg3;
- (void)setKeyboardTotalDisable:(_Bool)arg1 withFence:(BKSAnimationFenceHandle *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)setDeactivating:(_Bool)arg1;
- (void)startArbitrationWithExpectedState:(_UIKeyboardChangedInformation *)arg1 focusContext:(UIKBArbiterClientFocusContext *)arg2 hostingPIDs:(NSArray *)arg3 usingFence:(_Bool)arg4 withSuppression:(int)arg5 onConnected:(void (^)(_UIKeyboardChangedInformation *, long long, _Bool))arg6;
@end

