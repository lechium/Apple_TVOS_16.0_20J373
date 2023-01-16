//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MTLDebugInstrumentationData, MTLLoadedFile, NSArray, NSData, NSString;
@protocol MTLDevice, OS_dispatch_data;

__attribute__((visibility("hidden")))
@interface MTLDynamicLibraryContainer : NSObject
{
    MTLLoadedFile *_fileMapping;	// 8 = 0x8
    id <MTLDevice> _device;	// 16 = 0x10
    NSObject<OS_dispatch_data> *_vendorData;	// 24 = 0x18
    NSArray *_exportedFunctions;	// 32 = 0x20
    NSArray *_exportedVariables;	// 40 = 0x28
    NSArray *_importedSymbols;	// 48 = 0x30
    NSArray *_importedLibraries;	// 56 = 0x38
    NSString *_installName;	// 64 = 0x40
    NSData *_airData;	// 72 = 0x48
    unsigned long long _bitcodeOffset;	// 80 = 0x50
    unsigned long long _bitcodeSize;	// 88 = 0x58
    unsigned long long _airOffset;	// 96 = 0x60
    unsigned long long _airSize;	// 104 = 0x68
    int _airVersion;	// 112 = 0x70
    CDStruct_41a22ec7 _libraryUUID;	// 116 = 0x74
    MTLDebugInstrumentationData *_debugInstrumentationData;	// 152 = 0x98
}

- (_Bool)serializeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000003ed8d
- (id)airData;	// IMP=0x000000000003ed5f
- (oneway void)release;	// IMP=0x000000000003ecad
- (void)dealloc;	// IMP=0x000000000003ec02
- (id)initWithURL:(id)arg1 device:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x000000000003e381
- (id)initWithLibrary:(struct MTLLibraryData *)arg1 binaryData:(id)arg2 device:(id)arg3 error:(id *)arg4;	// IMP=0x000000000003e156

@end

