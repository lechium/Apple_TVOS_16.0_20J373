//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CPLPrequeliteDownloadResource : NSObject
{
    int _retryCount;	// 8 = 0x8
    int _status;	// 12 = 0xc
    unsigned long long _position;	// 16 = 0x10
    long long _scopeIndex;	// 24 = 0x18
    NSString *_itemIdentifier;	// 32 = 0x20
    unsigned long long _resourceType;	// 40 = 0x28
    NSString *_fingerPrint;	// 48 = 0x30
    NSString *_fileUTI;	// 56 = 0x38
    unsigned long long _fileSize;	// 64 = 0x40
    unsigned long long _taskIdentifier;	// 72 = 0x48
    unsigned long long _intent;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000004e2a1
@property(nonatomic) unsigned long long intent; // @synthesize intent=_intent;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) int retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) unsigned long long taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(copy, nonatomic) NSString *fileUTI; // @synthesize fileUTI=_fileUTI;
@property(copy, nonatomic) NSString *fingerPrint; // @synthesize fingerPrint=_fingerPrint;
@property(nonatomic) unsigned long long resourceType; // @synthesize resourceType=_resourceType;
@property(copy, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(nonatomic) long long scopeIndex; // @synthesize scopeIndex=_scopeIndex;
@property(nonatomic) unsigned long long position; // @synthesize position=_position;
- (id)resourceWithDownloadQueue:(id)arg1;	// IMP=0x001000000004e0cd
- (id)initWithResource:(id)arg1;	// IMP=0x001000000004df0a
- (id)initFromPQLResultSet:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004dd84

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

