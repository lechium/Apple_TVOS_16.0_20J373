//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CallKit/CXProviderDelegate-Protocol.h>

@class CXEnableVideoCallAction, CXJoinCallAction, CXProvider, CXPullCallAction, CXSendMMIOrUSSDCodeAction, CXSetRelayingCallAction, CXSetScreenShareAttributesCallAction, CXSetSendingVideoCallAction, CXSetSharingScreenCallAction, CXSetTTYTypeCallAction, CXSetVideoPresentationSizeCallAction, CXSetVideoPresentationStateCallAction;

@protocol CXProviderDelegatePrivate <CXProviderDelegate>

@optional
- (void)provider:(CXProvider *)arg1 performSetVideoPresentationStateCallAction:(CXSetVideoPresentationStateCallAction *)arg2;
- (void)provider:(CXProvider *)arg1 performSetVideoPresentationSizeCallAction:(CXSetVideoPresentationSizeCallAction *)arg2;
- (void)provider:(CXProvider *)arg1 performPullCallAction:(CXPullCallAction *)arg2;
- (void)provider:(CXProvider *)arg1 performSetRelayingCallAction:(CXSetRelayingCallAction *)arg2;
- (void)provider:(CXProvider *)arg1 performEnableVideoCallAction:(CXEnableVideoCallAction *)arg2;
- (void)provider:(CXProvider *)arg1 performSetScreenShareAttributesCallAction:(CXSetScreenShareAttributesCallAction *)arg2;
- (void)provider:(CXProvider *)arg1 performSetSharingScreenCallAction:(CXSetSharingScreenCallAction *)arg2;
- (void)provider:(CXProvider *)arg1 performSetSendingVideoCallAction:(CXSetSendingVideoCallAction *)arg2;
- (void)provider:(CXProvider *)arg1 performSetTTYTypeCallAction:(CXSetTTYTypeCallAction *)arg2;
- (void)provider:(CXProvider *)arg1 performJoinCallAction:(CXJoinCallAction *)arg2;
- (void)provider:(CXProvider *)arg1 performSendMMIOrUSSDCodeAction:(CXSendMMIOrUSSDCodeAction *)arg2;
@end
