//
//  MWCaptionView.h
//  MWPhotoBrowser
//
//  Created by Michael Waterfall on 30/12/2011.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MWPhoto;

@interface MWCaptionView : UIView {
    MWPhoto *_photo;
    UILabel *_label;
}

// Init
- (id)initWithPhoto:(MWPhoto *)photo;

// To create your own custom caption view, subclass this view
// and override the following two methods:

// Override -setupCaption so setup your subviews and customise the appearance
// of your custom caption
- (void)setupCaption;

// Override -sizeThatFits: and return a CGSize specifying the height of your
// custom caption view. With width property is ignored and the caption is displayed
// the full width of the screen
- (CGSize)sizeThatFits:(CGSize)size;

@end