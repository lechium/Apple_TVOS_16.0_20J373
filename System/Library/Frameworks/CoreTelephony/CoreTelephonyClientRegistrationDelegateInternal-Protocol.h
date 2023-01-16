//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreTelephony/NSObject-Protocol.h>

@class CTCellInfo, CTEncryptionStatusInfo, CTEnhancedDataLinkQualityMetric, CTEnhancedLinkQualityMetric, CTIMSRegistrationTransportInfo, CTNRStatus, CTNetworkList, CTPlmnInfo, CTRatSelection, CTRegistrationDisplayStatus, CTServiceDescriptor, CTSignalStrengthInfo, CTVoiceLinkQualityMetric, CTXPCServiceSubscriptionContext, NSDictionary, NSNumber, NSString;

@protocol CoreTelephonyClientRegistrationDelegateInternal <NSObject>

@optional
- (void)plmnChanged:(CTServiceDescriptor *)arg1 plmn:(CTPlmnInfo *)arg2;
- (void)nrDisableStatusChanged:(CTServiceDescriptor *)arg1 status:(CTNRStatus *)arg2;
- (void)ratSelectionChanged:(CTServiceDescriptor *)arg1 selection:(CTRatSelection *)arg2;
- (void)encryptionStatusChanged:(CTServiceDescriptor *)arg1 info:(CTEncryptionStatusInfo *)arg2;
- (void)networkReselectionNeeded:(CTXPCServiceSubscriptionContext *)arg1;
- (void)networkSelected:(CTXPCServiceSubscriptionContext *)arg1 success:(_Bool)arg2 mode:(NSString *)arg3;
- (void)customerServiceProfileChanged:(CTXPCServiceSubscriptionContext *)arg1 visible:(_Bool)arg2;
- (void)networkListAvailable:(CTXPCServiceSubscriptionContext *)arg1 list:(CTNetworkList *)arg2;
- (void)cellMonitorUpdate:(CTXPCServiceSubscriptionContext *)arg1 info:(CTCellInfo *)arg2;
- (void)cellChanged:(CTXPCServiceSubscriptionContext *)arg1 cell:(NSDictionary *)arg2;
- (void)imsRegistrationChanged:(CTXPCServiceSubscriptionContext *)arg1 info:(CTIMSRegistrationTransportInfo *)arg2;
- (void)enhancedDataLinkQualityChanged:(CTXPCServiceSubscriptionContext *)arg1 metric:(CTEnhancedDataLinkQualityMetric *)arg2;
- (void)enhancedVoiceLinkQualityChanged:(CTXPCServiceSubscriptionContext *)arg1 metric:(CTEnhancedLinkQualityMetric *)arg2;
- (void)voiceLinkQualityChanged:(CTXPCServiceSubscriptionContext *)arg1 metric:(CTVoiceLinkQualityMetric *)arg2;
- (void)rejectCauseCodeChanged:(CTXPCServiceSubscriptionContext *)arg1 causeCode:(NSNumber *)arg2;
- (void)signalStrengthChanged:(CTXPCServiceSubscriptionContext *)arg1 info:(CTSignalStrengthInfo *)arg2;
- (void)displayStatusChanged:(CTXPCServiceSubscriptionContext *)arg1 status:(CTRegistrationDisplayStatus *)arg2;
- (void)operatorNameChanged:(CTXPCServiceSubscriptionContext *)arg1 name:(NSString *)arg2;
@end

