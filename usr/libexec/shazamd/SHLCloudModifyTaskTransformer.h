//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKModifyRecordsOperation, MISSING_TYPE, SHLSyncSessionConfiguration;

@interface SHLCloudModifyTaskTransformer : NSObject
{
    MISSING_TYPE *_configuration;	// 8 = 0x8
    CKModifyRecordsOperation *_modifyRecordsOperation;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000026d46
@property(retain, nonatomic) CKModifyRecordsOperation *modifyRecordsOperation; // @synthesize modifyRecordsOperation=_modifyRecordsOperation;
@property(readonly, nonatomic) SHLSyncSessionConfiguration *configuration; // @synthesize configuration=_configuration;
- (id)recordIDsToDeleteFromModifyTask:(id)arg1;	// IMP=0x0010000000026868
- (id)recordsToSaveFromModifyTask:(id)arg1 container:(id)arg2;	// IMP=0x0010000000026356
- (id)cloudBackedOperationFromModifyTask:(id)arg1 container:(id)arg2;	// IMP=0x0010000000025072
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0010000000024fd7

@end

