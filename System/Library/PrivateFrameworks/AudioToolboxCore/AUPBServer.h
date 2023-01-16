//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, NSXPCConnection, NSXPCListener;
@protocol AUPBRegistrarHosting;

__attribute__((visibility("hidden")))
@interface AUPBServer : NSObject
{
    NSXPCConnection *mRegistrarConnection;	// 8 = 0x8
    id <AUPBRegistrarHosting> mProxyInterface;	// 16 = 0x10
    NSXPCListener *mListener;	// 24 = 0x18
    NSMutableArray *mClientConnections;	// 32 = 0x20
    struct unique_ptr<CADeprecated::CAMutex, std::default_delete<CADeprecated::CAMutex>> mLock;	// 40 = 0x28
    struct map<unsigned int, RemoteAUHandleInfo, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, RemoteAUHandleInfo>>> mAUHandlesToInfo;	// 48 = 0x30
    struct map<unsigned int, AUProcessingBlock, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, AUProcessingBlock>>> mBlockHandlesToMethods;	// 72 = 0x48
    unsigned int mAUPBRefCounter;	// 96 = 0x60
    struct unique_ptr<TestAUProcessingBlock, std::default_delete<TestAUProcessingBlock>> mTestBlock;	// 104 = 0x68
    unsigned int mAUHandleCntr;	// 112 = 0x70
    int mNotifyToken;	// 116 = 0x74
    _Bool mValidToken;	// 120 = 0x78
    _Bool mConnectionAcknowledged;	// 121 = 0x79
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000005fd27
+ (id)sharedInstance;	// IMP=0x001000000005fca8
- (id).cxx_construct;	// IMP=0x0000000000062f3e
- (void).cxx_destruct;	// IMP=0x0000000000062ee8
- (void)setAudioUnit:(unsigned int)arg1 parameter:(unsigned int)arg2 onScope:(unsigned int)arg3 element:(unsigned int)arg4 value:(float)arg5 withReply:(CDUnknownBlockType)arg6;	// IMP=0x0000000000062d0f
- (void)getAudioUnit:(unsigned int)arg1 parameter:(unsigned int)arg2 onScope:(unsigned int)arg3 element:(unsigned int)arg4 inReply:(CDUnknownBlockType)arg5;	// IMP=0x0000000000062b30
- (void)setAudioUnit:(unsigned int)arg1 property:(unsigned int)arg2 onScope:(unsigned int)arg3 element:(unsigned int)arg4 value:(id)arg5 withReply:(CDUnknownBlockType)arg6;	// IMP=0x00000000000628ae
- (void)getAudioUnit:(unsigned int)arg1 property:(unsigned int)arg2 onScope:(unsigned int)arg3 element:(unsigned int)arg4 inReply:(CDUnknownBlockType)arg5;	// IMP=0x00000000000624bf
- (void)getAudioUnit:(unsigned int)arg1 propertyInfo:(unsigned int)arg2 onScope:(unsigned int)arg3 element:(unsigned int)arg4 inReply:(CDUnknownBlockType)arg5;	// IMP=0x00000000000622b1
- (void)setProcessingBlock:(unsigned int)arg1 property:(unsigned int)arg2 value:(id)arg3 withReply:(CDUnknownBlockType)arg4;	// IMP=0x000000000006202e
- (void)copyProcessingBlock:(unsigned int)arg1 property:(unsigned int)arg2 intoReply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000615d1
- (struct AUProcessingBlock *)aupbFromRef:(struct OpaqueAUPB *)arg1;	// IMP=0x000000000006157a
- (unsigned int)auHandleFromRef:(struct OpaqueRemoteAudioUnit *)arg1;	// IMP=0x000000000006151e
- (struct OpaqueRemoteAudioUnit *)auRefFromHandle:(unsigned int)arg1;	// IMP=0x00000000000614e0
- (struct AUProcessingBlock *)aupbFromAUHandle:(unsigned int)arg1;	// IMP=0x000000000006146f
- (void)blockListChanged;	// IMP=0x0000000000061456
- (void)processingBlock:(struct OpaqueAUPB *)arg1 properties:(const unsigned int *)arg2 count:(unsigned int)arg3 changedWithQualifierData:(void *)arg4 length:(unsigned int)arg5;	// IMP=0x0000000000061161
- (void)processingBlockRef:(struct OpaqueAUPB *)arg1 propertyChanged:(unsigned int)arg2;	// IMP=0x0000000000060f55
- (unsigned int)handleFromAUPBRef:(struct OpaqueAUPB *)arg1;	// IMP=0x0000000000060f4c
- (int)unregisterAU:(struct OpaqueRemoteAudioUnit *)arg1;	// IMP=0x0000000000060e15
- (int)registerAU:(struct OpaqueRemoteAudioUnit *)arg1 inBlock:(struct OpaqueAUPB *)arg2;	// IMP=0x0000000000060bdc
- (int)unregisterBlock:(struct OpaqueAUPB *)arg1;	// IMP=0x00000000000609a8
- (struct OpaqueAUPB *)registerBlock:(const struct AUPBMethods *)arg1 withUserData:(void *)arg2;	// IMP=0x000000000006078d
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000000060436
- (void)handleRegistrarCrash;	// IMP=0x00000000000601e1
- (void)startRegistrarConnection;	// IMP=0x000000000005ffae
- (void)checkConnectRegistrar;	// IMP=0x000000000005ff5a
- (id)init;	// IMP=0x000000000005fdaf
- (void)dealloc;	// IMP=0x000000000005fd70
- (id)autorelease;	// IMP=0x000000000005fd67
- (oneway void)release;	// IMP=0x000000000005fd61
- (unsigned long long)retainCount;	// IMP=0x000000000005fd54
- (id)retain;	// IMP=0x000000000005fd4b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005fd42

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
