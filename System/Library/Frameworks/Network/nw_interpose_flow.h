//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_nw_interface, OS_nw_path_flow, OS_nw_path_flow_registration;

__attribute__((visibility("hidden")))
@interface nw_interpose_flow : NSObject
{
    NSObject<OS_nw_interface> *_interface;	// 8 = 0x8
    NSObject<OS_nw_path_flow_registration> *_registration;	// 16 = 0x10
    NSObject<OS_nw_path_flow> *_flow;	// 24 = 0x18
    CDUnknownBlockType _eventHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000008f0180
- (_Bool)matchNexusInstance:(id)arg1;	// IMP=0x00000000008f0160
- (_Bool)matchNexusAgentWithFlow:(id)arg1;	// IMP=0x00000000008f0100
- (_Bool)matchNexusAgent:(unsigned char [16])arg1;	// IMP=0x00000000008eff90
- (void)resetFlow:(id)arg1;	// IMP=0x00000000008efdd0
- (void)clearFlowEventHandler;	// IMP=0x00000000008efc70
- (void)closeFlow;	// IMP=0x00000000008efb00
- (void)notifyFlowEvent:(int)arg1;	// IMP=0x00000000008efaf0
- (void)close;	// IMP=0x00000000008ef970
- (void)dealloc;	// IMP=0x00000000008ef7f0
- (id)initWithInterface:(id)arg1 registration:(id)arg2 eventHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000008ef470

@end
