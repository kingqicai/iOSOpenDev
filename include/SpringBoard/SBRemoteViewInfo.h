/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUnknownSuperclass.h"
#import "SpringBoard-Structs.h"

@class SBProxyRemoteView, NSString, SBApplication;

@interface SBRemoteViewInfo : SBUnknownSuperclass {
	NSString *_remoteViewIdentifier;	// 4 = 0x4
	SBProxyRemoteView *_proxyRemoteView;	// 8 = 0x8
	unsigned _contextID;	// 12 = 0xc
	SBApplication *_application;	// 16 = 0x10
	CGSize _viewSize;	// 20 = 0x14
}
@property(retain, nonatomic) NSString *remoteViewIdentifier;	// G=0xdfb0d; S=0xdffa1; @synthesize=_remoteViewIdentifier
@property(assign, nonatomic) unsigned contextID;	// G=0xdfaed; S=0xdfafd; @synthesize=_contextID
@property(retain, nonatomic) SBProxyRemoteView *proxyRemoteView;	// G=0xdfadd; S=0xdffc9; @synthesize=_proxyRemoteView
@property(retain, nonatomic) SBApplication *application;	// G=0xdfacd; S=0xdfff1; @synthesize=_application
@property(assign, nonatomic) CGSize viewSize;	// G=0xdfaa1; S=0xdfab9; @synthesize=_viewSize
- (void)dealloc;	// 0xe0019
// declared property getter: - (CGSize)viewSize;	// 0xdfaa1
// declared property setter: - (void)setViewSize:(CGSize)size;	// 0xdfab9
// declared property getter: - (id)application;	// 0xdfacd
// declared property setter: - (void)setApplication:(id)application;	// 0xdfff1
// declared property getter: - (id)proxyRemoteView;	// 0xdfadd
// declared property setter: - (void)setProxyRemoteView:(id)view;	// 0xdffc9
// declared property getter: - (unsigned)contextID;	// 0xdfaed
// declared property setter: - (void)setContextID:(unsigned)anId;	// 0xdfafd
// declared property getter: - (id)remoteViewIdentifier;	// 0xdfb0d
// declared property setter: - (void)setRemoteViewIdentifier:(id)identifier;	// 0xdffa1
@end
