//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, NSXPCListener, VCPActivity;

@interface VCPMediaAnalysisDaemon : NSObject
{
    VCPActivity *_photosFullAnalysis;	// 8 = 0x8
    VCPActivity *_photosPreAnalysis;	// 16 = 0x10
    VCPActivity *_photosFaceProcessing;	// 24 = 0x18
    VCPActivity *_photosOCRProcessing;	// 32 = 0x20
    VCPActivity *_photosMaintenance;	// 40 = 0x28
    VCPActivity *_preheatModels;	// 48 = 0x30
    VCPActivity *_homeResidentMaintenance;	// 56 = 0x38
    NSMutableArray *_analysisClients;	// 64 = 0x40
    NSXPCListener *_storageListener;	// 72 = 0x48
    NSXPCListener *_analysisListener;	// 80 = 0x50
    NSXPCListener *_realTimeListener;	// 88 = 0x58
    NSXPCListener *_publicServiceListener;	// 96 = 0x60
    NSXPCListener *_homeKitListener;	// 104 = 0x68
    NSXPCListener *_homeKitSessionListener;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0020000000002dbb
- (int)run:(int)arg1 argv:(const char **)arg2;	// IMP=0x0010000000002ba1
- (void)registerClient:(id)arg1 forPhotoLibraryURL:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000002854
- (void)storeAnalysis:(id)arg1 forAsset:(id)arg2 fromPhotoLibraryURL:(id)arg3 withReply:(CDUnknownBlockType)arg4;	// IMP=0x001000000000237d
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000001e26
- (id)init;	// IMP=0x0010000000001ce0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

