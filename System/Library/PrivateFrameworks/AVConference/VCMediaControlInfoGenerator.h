//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface VCMediaControlInfoGenerator : NSObject
{
    unsigned int _type;	// 8 = 0x8
    struct __CFDictionary *_callbacksDict;	// 16 = 0x10
    NSMutableArray *_controlInfoPool;	// 24 = 0x18
    struct _opaque_pthread_mutex_t _controlInfoPoolLock;	// 32 = 0x20
    unsigned char _version;	// 96 = 0x60
    unsigned char _fecFeedbackVersion;	// 97 = 0x61
    unsigned int _optionBitmap;	// 100 = 0x64
    struct _opaque_pthread_rwlock_t _callbackDictLock;	// 104 = 0x68
}

@property unsigned char fecFeedbackVersion; // @synthesize fecFeedbackVersion=_fecFeedbackVersion;
@property(readonly) unsigned char version; // @synthesize version=_version;
@property(readonly) unsigned int type; // @synthesize type=_type;
- (void)disposeControlInfo:(id)arg1;	// IMP=0x0000000000120c4c
- (void *)newControlInfoWithBuffer:(const char *)arg1 length:(unsigned long long)arg2 optionalControlInfo:(CDStruct_d3f1d543 *)arg3;	// IMP=0x0000000000120afc
- (void *)newControlInfo;	// IMP=0x0000000000120a3f
- (id)newControlInfoFromPool;	// IMP=0x00000000001209c3
- (unsigned long long)feedbackSize;	// IMP=0x00000000001209a5
- (int)addMediaControlInfoOption:(unsigned int)arg1;	// IMP=0x000000000012099a
- (void *)newMediaControlInfoWithBuffer:(const char *)arg1 length:(unsigned long long)arg2 optionalControlInfo:(CDStruct_d3f1d543 *)arg3;	// IMP=0x000000000012095e
- (void *)newMediaControlInfo;	// IMP=0x000000000012091f
- (void)passMediaControlInfo:(id)arg1 isFillBlobCallback:(_Bool)arg2;	// IMP=0x00000000001207f3
- (int)deregisterCallbacksWithContext:(void *)arg1;	// IMP=0x00000000001207b6
- (int)registerFillBlobCallback:(CDUnknownFunctionPointerType)arg1 processBlobCallback:(CDUnknownFunctionPointerType)arg2 context:(void *)arg3;	// IMP=0x0000000000120754
- (void)dealloc;	// IMP=0x00000000001206db
- (id)initWithType:(unsigned int)arg1 version:(unsigned char)arg2;	// IMP=0x00000000001205f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

