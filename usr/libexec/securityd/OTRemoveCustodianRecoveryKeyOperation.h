//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSOperation, NSUUID, OTOperationDependencies;

@interface OTRemoveCustodianRecoveryKeyOperation
{
    OTOperationDependencies *_deps;	// 16 = 0x10
    NSUUID *_uuid;	// 24 = 0x18
    NSOperation *_finishOp;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000cc0bf
@property(retain) NSOperation *finishOp; // @synthesize finishOp=_finishOp;
@property(retain) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain) OTOperationDependencies *deps; // @synthesize deps=_deps;
- (void)groupStart;	// IMP=0x00100000000cbe75
- (id)initWithUUID:(id)arg1 dependencies:(id)arg2;	// IMP=0x00100000000cbdd3

@end

