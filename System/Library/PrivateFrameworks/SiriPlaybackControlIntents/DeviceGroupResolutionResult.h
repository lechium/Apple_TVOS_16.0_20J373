//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INObjectResolutionResult.h>

@interface DeviceGroupResolutionResult : INObjectResolutionResult
{
}

+ (id)confirmationRequiredWithObjectToConfirm:(id)arg1;	// IMP=0x0060000000206070
+ (id)disambiguationWithObjectsToDisambiguate:(id)arg1;	// IMP=0x0060000000206030
+ (id)successWithResolvedObject:(id)arg1;	// IMP=0x0060000000205ff0
+ (id)confirmationRequiredWithDeviceGroupToConfirm:(id)arg1;	// IMP=0x0060000000205fa0
+ (id)disambiguationWithDeviceGroupsToDisambiguate:(id)arg1;	// IMP=0x0060000000205f30
+ (id)successWithResolvedDeviceGroup:(id)arg1;	// IMP=0x0060000000205ee0
- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;	// IMP=0x00000000002061e0

@end

