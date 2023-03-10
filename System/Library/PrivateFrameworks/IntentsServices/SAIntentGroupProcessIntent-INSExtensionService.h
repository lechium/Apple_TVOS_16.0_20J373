//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAIntentGroupProcessIntent.h>

@interface SAIntentGroupProcessIntent (INSExtensionService)
- (_Bool)ins_shouldUseExtendedFlowTimeout;	// IMP=0x006000000000368d
- (long long)ins_analyticsEndEventType;	// IMP=0x0060000000003682
- (long long)ins_analyticsBeginEventType;	// IMP=0x0060000000003677
- (void)_handleIntentWithExtensionProxy:(id)arg1 onQueue:(id)arg2 processIntentCompleted:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x006000000000340e
- (void)_confirmIntentWithExtensionProxy:(id)arg1 onQueue:(id)arg2 processIntentCompleted:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0060000000003163
- (void)_resolveIntentSlotsWithExtensionProxy:(id)arg1 onQueue:(id)arg2 processIntentCompleted:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0060000000002f9c
- (void)ins_sendIntent:(id)arg1 toExtensionProxy:(id)arg2 onQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0060000000002c46
- (void)ins_setJSONEncodedIntent:(id)arg1;	// IMP=0x0060000000002c34
- (void)ins_setProtobufEncodedIntent:(id)arg1;	// IMP=0x0060000000002c22
- (id)ins_protobufEncodedIntent;	// IMP=0x0060000000002c10
- (id)ins_jsonEncodedIntent;	// IMP=0x0060000000002bfe
@end

