//
//  AIRGoogleMapCallout.h
//  AirMaps
//
//  Created by Gil Birman on 9/6/16.
//
//

#ifdef HAVE_GOOGLE_MAPS

#import <UIKit/UIKit.h>
#import <React/RCTView.h>

@interface AIRGoogleMapCallout : UIView
@property (nonatomic, assign) BOOL tooltip;
// @property (nonatomic, copy) RCTBubblingEventBlock onPress;
@end

#endif
